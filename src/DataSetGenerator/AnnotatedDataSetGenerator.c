//
// Created by Olcay Taner YILDIZ on 29.12.2023.
//

#include <Corpus.h>
#include <AnnotatedCorpus.h>
#include "AnnotatedDataSetGenerator.h"

/**
 * Constructor for the AnnotatedDataSetGenerator which takes input the data directory, the pattern for the
 * training files included, and an instanceGenerator. The constructor loads the sentence corpus from the given
 * directory including the given files having the given pattern.
 * @param directory Directory where the corpus files reside.
 * @param pattern Pattern of the tree files to be included in the treebank. Use "." for all files.
 * @param instanceGenerator The instance generator used to generate the dataset.
 */
Data_set_ptr generate_annotated_data_set(const char *folder,
                                         int windowSize,
                                         Instance_ptr (*generate_instance_from_sentence)(Sentence_ptr, int, int,
                                                                                         void (*)(Instance_ptr,
                                                                                                  Sentence_ptr, int),
                                                                                         void (*)(Instance_ptr,
                                                                                                  const char *)),
                                         void add_attributes_for_words(
                                                 Instance_ptr instance,
                                                 Sentence_ptr sentence,
                                                 int wordIndex),
                                         void add_attributes_for_empty_words(
                                                 Instance_ptr instance,
                                                 const char *empty_word)) {
    Corpus_ptr corpus = create_annotated_corpus(folder);
    Data_set_ptr data_set = create_data_set();
    for (int i = 0; i < corpus->sentences->size; i++){
        Sentence_ptr sentence = array_list_get(corpus->sentences, i);
        for (int j = 0; j < sentence->words->size; j++){
            Instance_ptr instance = generate_instance_from_sentence(sentence, j, windowSize, add_attributes_for_words, add_attributes_for_empty_words);
            if (instance != NULL){
                add_instance_to_data_set(data_set, instance);
            }
        }
    }
    return data_set;
}
