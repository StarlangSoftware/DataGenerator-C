//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include <Dictionary/Word.h>
#include "IsHonorificAttribute.h"

/**
 * Binary attribute for a given word. If the word is "bay" or "bayan", the attribute will have the value "true",
 * otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
Attribute_ptr create_honorific_attribute(const char *surfaceForm) {
    return create_binary_attribute(is_honorific(surfaceForm));
}
