//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#include <AnnotatedWord.h>
#include "RootWordInstanceGenerator.h"

/**
 * Generates a single classification instance of the root word detection problem for the given word of the
 * given sentence. If the word does not have a morphological parse, the method throws InstanceNotGenerated.
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 * @return Classification instance.
 */
Instance_ptr generate_root_word_instance_from_sentence(Sentence_ptr sentence,
                                                       int wordIndex,
                                                       int windowSize,
                                                       void (*add_attributes_for_previous_words)(Instance_ptr, Sentence_ptr, int),
                                                       void (*add_attributes_for_empty_words)(Instance_ptr, const char *)) {
    Instance_ptr current;
    Annotated_word_ptr word;
    word = array_list_get(sentence->words, wordIndex);
    current = create_instance2(word->parse->root);
    for (int i = 0; i < windowSize; i++){
        if (wordIndex - windowSize + i >= 0){
            add_attributes_for_previous_words(current, sentence, wordIndex - windowSize + i);
        } else {
            add_attributes_for_empty_words(current, "<s>");
        }
    }
    add_attributes_for_previous_words(current, sentence, wordIndex);
    return current;
}
