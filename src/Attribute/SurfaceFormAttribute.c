//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "SurfaceFormAttribute.h"

/**
 * Discrete attribute for a given word. Returns the surface form.
 * @param surfaceForm Surface form of the word.
 */
Attribute_ptr create_surface_form_attribute(const char *surfaceForm) {
    return create_discrete_attribute(surfaceForm);
}
