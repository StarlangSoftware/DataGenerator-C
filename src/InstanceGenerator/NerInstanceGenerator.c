//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#include <AnnotatedWord.h>
#include "NerInstanceGenerator.h"
#include "SimpleWindowInstanceGenerator.h"

/**
 * Generates a single classification instance of the NER problem for the given word of the given sentence. If the
 * word has not been labeled with NER tag yet, the method returns null.
 * @param sentence Input sentence.
 * @param wordIndex The index of the word in the sentence.
 * @return Classification instance.
 */
Instance_ptr generate_ner_instance_from_sentence(Sentence_ptr sentence,
                                                 int wordIndex,
                                                 int windowSize,
                                                 void (*add_attributes_for_words)(Instance_ptr, Sentence_ptr, int),
                                                 void (*add_attributes_for_empty_words)(Instance_ptr, const char *)) {
    Instance_ptr current;
    Annotated_word_ptr word;
    word = array_list_get(sentence->words, wordIndex);
    current = create_instance2(named_entity_type_to_string(word->named_entity_type));
    add_attributes(current, sentence, wordIndex, windowSize, add_attributes_for_words, add_attributes_for_empty_words);
    return current;
}
