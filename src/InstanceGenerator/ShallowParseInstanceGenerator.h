//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#ifndef DATAGENERATOR_SHALLOWPARSEINSTANCEGENERATOR_H
#define DATAGENERATOR_SHALLOWPARSEINSTANCEGENERATOR_H

#include <Instance/Instance.h>
#include <Sentence.h>

Instance_ptr generate_shallow_parse_instance_from_sentence(Sentence_ptr sentence,
                                                           int wordIndex,
                                                           int windowSize,
                                                           void add_attributes_for_words(Instance_ptr instance,
                                                                                         Sentence_ptr sentence,
                                                                                         int wordIndex),
                                                           void add_attributes_for_empty_words(Instance_ptr instance,
                                                                                               const char *empty_word));

#endif //DATAGENERATOR_SHALLOWPARSEINSTANCEGENERATOR_H
