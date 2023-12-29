//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#include <AnnotatedWord.h>
#include "ShallowParseInstanceGenerator.h"
#include "SimpleWindowInstanceGenerator.h"

/**
 * Generates a single classification instance of the Shallow Parse problem for the given word of the given sentence.
 * If the  word has not been labeled with shallow parse tag yet, the method returns null.
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 * @return Classification instance.
 */
Instance_ptr generate_shallow_parse_instance_from_sentence(Sentence_ptr sentence, int wordIndex, int windowSize,
                                                           void (*add_attributes_for_words)(Instance_ptr, Sentence_ptr,
                                                                                            int),
                                                           void (*add_attributes_for_empty_words)(Instance_ptr,
                                                                                                  const char *)) {
    Instance_ptr current;
    Annotated_word_ptr word;
    word = array_list_get(sentence->words, wordIndex);
    if (word->shallow_parse == NULL){
        return NULL;
    }
    current = create_instance2(word->shallow_parse);
    add_attributes(current, sentence, wordIndex, windowSize, add_attributes_for_words, add_attributes_for_empty_words);
    return current;
}
