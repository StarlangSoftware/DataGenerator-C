//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#ifndef DATAGENERATOR_LASTIGCONTAINSTAGATTRIBUTE_H
#define DATAGENERATOR_LASTIGCONTAINSTAGATTRIBUTE_H

#include <MorphologicalParse.h>
#include <Attribute/Attribute.h>

Attribute_ptr create_last_ig_contains_tag_attribute(const Morphological_parse* parse, Morphological_tag tag);

#endif //DATAGENERATOR_LASTIGCONTAINSTAGATTRIBUTE_H
