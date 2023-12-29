//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#ifndef DATAGENERATOR_FEATUREDDISAMBIGUATIONINSTANCEGENERATOR_H
#define DATAGENERATOR_FEATUREDDISAMBIGUATIONINSTANCEGENERATOR_H

#include <Instance/Instance.h>
#include <Sentence.h>

void add_attributes_for_previous_words_disambiguation(Instance_ptr instance,
                                                      Sentence_ptr sentence,
                                                      int wordIndex);

void add_attributes_for_empty_words_disambiguation(Instance_ptr instance, const char* empty_word);

#endif //DATAGENERATOR_FEATUREDDISAMBIGUATIONINSTANCEGENERATOR_H
