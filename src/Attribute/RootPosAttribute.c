//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "RootPosAttribute.h"

/**
 * Discrete attribute for a given word. Returns the part of speech of the root word
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_root_pos_attribute(const Morphological_parse *parse) {
    return create_discrete_attribute(get_root_pos(parse));
}
