//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#ifndef DATAGENERATOR_FEATUREDSHALLOWPARSEINSTANCEGENERATOR_H
#define DATAGENERATOR_FEATUREDSHALLOWPARSEINSTANCEGENERATOR_H

#include <Instance/Instance.h>
#include <Sentence.h>

void add_attributes_for_words_shallow_parse(Instance_ptr instance,
                                            Sentence_ptr sentence,
                                            int wordIndex);

void add_attributes_for_empty_words_shallow_parse(Instance_ptr instance, const char *empty_word);

#endif //DATAGENERATOR_FEATUREDSHALLOWPARSEINSTANCEGENERATOR_H
