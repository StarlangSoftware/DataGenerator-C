//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#ifndef DATAGENERATOR_ROOTWORDINSTANCEGENERATOR_H
#define DATAGENERATOR_ROOTWORDINSTANCEGENERATOR_H

#include <Instance/Instance.h>
#include <Sentence.h>

Instance_ptr generate_root_word_instance_from_sentence(Sentence_ptr sentence,
                                                       int wordIndex,
                                                       int windowSize,
                                                       void add_attributes_for_previous_words(Instance_ptr instance,
                                                                                              Sentence_ptr sentence,
                                                                                              int wordIndex),
                                                       void add_attributes_for_empty_words(Instance_ptr instance,
                                                                                           const char *empty_word));

#endif //DATAGENERATOR_ROOTWORDINSTANCEGENERATOR_H
