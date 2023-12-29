//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include <Dictionary/Word.h>
#include "IsOrganizationAttribute.h"

/**
 * Binary attribute for a given word. If the word is "corp.", "inc." or "co.", the attribute will have the
 * value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
Attribute_ptr create_organization_attribute(const char *surfaceForm) {
    return create_binary_attribute(is_organization(surfaceForm));
}
