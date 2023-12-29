//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#include "SimpleWindowInstanceGenerator.h"

/**
 * addAttributes adds all attributes of the previous words, the current wordn, and next words of the given word
 * to the given instance. If the previous or next words does not exists, the method calls
 * addAttributesForEmptyWords method. If the word does not exists in the dictionary or the required annotation layer
 * does not exists in the annotated word, the method throws InstanceNotGenerated. The window size determines the
 * number of previous and next words.
 * @param current Current classification instance to which attributes will be added.
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 */
void add_attributes(Instance_ptr instance,
                    Sentence_ptr sentence,
                    int wordIndex,
                    int windowSize,
                    void add_attributes_for_words(Instance_ptr instance, Sentence_ptr sentence, int wordIndex),
                    void add_attributes_for_empty_words(Instance_ptr instance, const char* empty_word)) {
    for (int i = 0; i < windowSize; i++){
        if (wordIndex - windowSize + i >= 0){
            add_attributes_for_words(instance, sentence, wordIndex - windowSize + i);
        } else {
            add_attributes_for_empty_words(instance, "<s>");
        }
    }
    add_attributes_for_words(instance, sentence, wordIndex);
    for (int i = 0; i < windowSize; i++){
        if (wordIndex + i + 1 < sentence->words->size){
            add_attributes_for_words(instance, sentence, wordIndex + i + 1);
        } else {
            add_attributes_for_empty_words(instance, "</s>");
        }
    }

}
