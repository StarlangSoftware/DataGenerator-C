//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include <AnnotatedSentence.h>
#include "Predicate.h"

/**
 * Discrete attribute for a given word. Returns the nearest predicate word to the given word
 * @param sentence Sentence where current word is in.
 * @param index Position of the current word in the sentence
 */
Attribute_ptr create_predicate_attribute(Sentence_ptr sentence, int index) {
    return create_discrete_attribute(get_predicate(sentence, index));
}
