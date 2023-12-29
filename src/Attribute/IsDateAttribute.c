//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "IsDateAttribute.h"

/**
 * Binary attribute for a given word. If the word represents a date (if the morphological parse contains
 * tag DATE), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_date_attribute(const Morphological_parse *parse) {
    return create_binary_attribute(is_parse_date(parse));
}
