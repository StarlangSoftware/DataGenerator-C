//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include <Dictionary/Word.h>
#include "IsTimeAttribute.h"

/**
 * Binary attribute for a given word. If the word represents a time form, the attribute will have the
 * value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
Attribute_ptr create_time_attribute(const char *surfaceForm) {
    return create_binary_attribute(is_time(surfaceForm));
}
