//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "MainPosAttribute.h"

/**
 * Discrete attribute for a given word. Returns the last part of speech (main part of speech) of the word
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_main_pos_attribute(const Morphological_parse *parse) {
    return create_discrete_attribute(get_pos(parse));
}
