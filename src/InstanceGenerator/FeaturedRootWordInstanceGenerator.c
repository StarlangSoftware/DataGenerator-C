//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#include <MorphologicalParse.h>
#include <AnnotatedWord.h>
#include "FeaturedRootWordInstanceGenerator.h"
#include "../Attribute/MainPosAttribute.h"
#include "../Attribute/IsCapitalAttribute.h"

/**
 * Abstract function for adding attributes to the root word determination problem. Depending on your design
 * you can add as many attributes as possible. The number of attributes in this function should be equal to the
 * number of attributes in the function addAttributesForEmptyWords.
 * @param current Current classification instance
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 */
void add_attributes_for_previous_words_root_word(Instance_ptr instance,
                                                 Sentence_ptr sentence,
                                                 int wordIndex) {
    Morphological_parse_ptr parse;
    Annotated_word_ptr word;
    word = array_list_get(sentence->words, wordIndex);
    parse = word->parse;
    add_attribute_to_instance(instance, create_main_pos_attribute(parse));
    add_attribute_to_instance(instance, create_capital_attribute(word->name));
}

/**
 * Abstract function for adding attributes for empty words to the root word determination problem. The number of
 * attributes in this function should be equal to the number of attributes in the function
 * addAttributesForPreviousWords.
 * @param current Current classification instance
 * @param emptyWord String form to place for empty words.
 */
void add_attributes_for_empty_words_root_word(Instance_ptr instance, const char *empty_word) {
    add_attribute_to_instance(instance, create_discrete_attribute("NULL"));
    add_attribute_to_instance(instance, create_binary_attribute(false));
}
