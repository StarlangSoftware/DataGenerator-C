//
// Created by Olcay Taner YILDIZ on 29.12.2023.
//

#ifndef DATAGENERATOR_DATASETGENERATOR_H
#define DATAGENERATOR_DATASETGENERATOR_H

#include <DataSet/DataSet.h>
#include <Instance/Instance.h>
#include <Sentence.h>

Data_set_ptr generate_data_set(const char *folder,
                               int windowSize,
                               Instance_ptr generate_instance_from_sentence(Sentence_ptr sentence,
                                                                            int wordIndex,
                                                                            int windowSize,
                                                                            void add_attributes_for_words(
                                                                                    Instance_ptr instance,
                                                                                    Sentence_ptr sentence,
                                                                                    int wordIndex),
                                                                            void add_attributes_for_empty_words(
                                                                                    Instance_ptr instance,
                                                                                    const char *empty_word)),
                               void add_attributes_for_words(
                                       Instance_ptr instance,
                                       Sentence_ptr sentence,
                                       int wordIndex),
                               void add_attributes_for_empty_words(
                                       Instance_ptr instance,
                                       const char *empty_word));

#endif //DATAGENERATOR_DATASETGENERATOR_H
