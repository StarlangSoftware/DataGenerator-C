//
// Created by Olcay Taner YILDIZ on 29.12.2023.
//

#include <TreeBank.h>
#include "DataSetGenerator.h"
#include "TreeBankDrawable.h"
#include "ParseTreeDrawable.h"

/**
 * Constructor for the DataSetGenerator which takes input the data directory, the pattern for the training files
 * included, includepunctuation, and an instanceGenerator. The constructor loads the treebank from the given directory
 * including the given files having the given pattern. If punctuations are not included, they are removed from
 * the data.
 * @param directory Directory where the treebank files reside.
 * @param pattern Pattern of the tree files to be included in the treebank. Use "." for all files.
 * @param includePunctuation If true, punctuation symbols are also included in the dataset, false otherwise.
 * @param instanceGenerator The instance generator used to generate the dataset.
 */
Data_set_ptr generate_data_set(const char *folder, int windowSize,
                               Instance_ptr (*generate_instance_from_sentence)(Sentence_ptr, int, int,
                                                                               void (*)(Instance_ptr, Sentence_ptr,
                                                                                        int),
                                                                               void (*)(Instance_ptr, const char *)),
                               void (*add_attributes_for_words)(Instance_ptr, Sentence_ptr, int),
                               void (*add_attributes_for_empty_words)(Instance_ptr, const char *)) {
    Data_set_ptr data_set = create_data_set();
    Tree_bank_ptr tree_bank = create_tree_bank_drawable(folder);
    for (int i = 0; i < tree_bank->parse_trees->size; i++){
        Parse_tree_drawable_ptr parse_tree = array_list_get(tree_bank->parse_trees, i);
        Sentence_ptr sentence = generate_annotated_sentence(parse_tree);
        for (int j = 0; j < sentence->words->size; j++){
            Instance_ptr instance = generate_instance_from_sentence(sentence, j, windowSize, add_attributes_for_words, add_attributes_for_empty_words);
            if (instance != NULL){
                add_instance_to_data_set(data_set, instance);
            }
        }
    }
    free_tree_bank_drawable(tree_bank);
    return data_set;
}
