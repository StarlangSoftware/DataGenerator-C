//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#ifndef DATAGENERATOR_ROOTPOSATTRIBUTE_H
#define DATAGENERATOR_ROOTPOSATTRIBUTE_H

#include <MorphologicalParse.h>
#include <Attribute/Attribute.h>

Attribute_ptr create_root_pos_attribute(const Morphological_parse* parse);

#endif //DATAGENERATOR_ROOTPOSATTRIBUTE_H
