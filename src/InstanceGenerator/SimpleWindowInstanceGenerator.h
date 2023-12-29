//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#ifndef DATAGENERATOR_SIMPLEWINDOWINSTANCEGENERATOR_H
#define DATAGENERATOR_SIMPLEWINDOWINSTANCEGENERATOR_H

#include <Instance/Instance.h>
#include <Sentence.h>

void add_attributes(Instance_ptr instance,
                    Sentence_ptr sentence,
                    int wordIndex,
                    int windowSize,
                    void add_attributes_for_words(Instance_ptr instance, Sentence_ptr sentence, int wordIndex),
                    void add_attributes_for_empty_words(Instance_ptr instance, const char* empty_word));

#endif //DATAGENERATOR_SIMPLEWINDOWINSTANCEGENERATOR_H
