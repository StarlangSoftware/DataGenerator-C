//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "IsGazetteer.h"

/**
 * Binary attribute for a given word. If the word is listed in the Location Gazetteer file, the attribute will
 * have the value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
Attribute_ptr create_gazetteer_attribute(Gazetteer_ptr gazetteer, const char *surfaceForm) {
    return create_binary_attribute(gazetteer_contains(gazetteer, surfaceForm));
}
