//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "LastIGContainsTagAttribute.h"

/**
 * Binary attribute for a given word. If the last inflectional group of the word contains ABLATIVE tag,
 * the attribute will be "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_last_ig_contains_tag_attribute(const Morphological_parse *parse, Morphological_tag tag) {
    return create_binary_attribute(last_ig_contains_tag(parse, tag));
}
