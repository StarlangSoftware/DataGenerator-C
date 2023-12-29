//
// Created by Olcay Taner YILDIZ on 29.12.2023.
//

#include <ParseTreeDrawable.h>
#include "NERCorpusGenerator.h"
#include "TreeBankDrawable.h"

Corpus_ptr generate_ner_corpus(const char *folder) {
    Tree_bank_ptr tree_bank = create_tree_bank_drawable(folder);
    Corpus_ptr corpus = create_corpus();
    for (int i = 0; i < tree_bank->parse_trees->size; i++){
        Parse_tree_drawable_ptr parse_tree = array_list_get(tree_bank->parse_trees, i);
        if (layer_all(parse_tree->root, NER)){
            Sentence_ptr sentence = generate_annotated_sentence(parse_tree);
            array_list_add(corpus->sentences, sentence);
        }
    }
    return corpus;
}
