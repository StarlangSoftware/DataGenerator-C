//
// Created by Olcay Taner YILDIZ on 28.12.2023.
//

#include <AnnotatedWord.h>
#include "FeaturedShallowParseInstanceGenerator.h"
#include "../Attribute/IsAdjectiveAttribute.h"
#include "../Attribute/IsAuxiliaryVerbAttribute.h"
#include "../Attribute/IsCapitalAttribute.h"
#include "../Attribute/IsDateAttribute.h"
#include "../Attribute/IsFractionAttribute.h"
#include "../Attribute/IsHonorificAttribute.h"
#include "../Attribute/IsMoneyAttribute.h"
#include "../Attribute/IsNumberAttribute.h"
#include "../Attribute/IsOrganizationAttribute.h"
#include "../Attribute/IsProperNounAttribute.h"
#include "../Attribute/IsRealAttribute.h"
#include "../Attribute/IsTimeAttribute.h"
#include "../Attribute/LastIGContainsPossessiveAttribute.h"
#include "../Attribute/LastIGContainsTagAttribute.h"
#include "../Attribute/MainPosAttribute.h"
#include "../Attribute/Predicate.h"
#include "../Attribute/RootPosAttribute.h"
#include "../Attribute/RootFormAttribute.h"
#include "../Attribute/CaseAttribute.h"


void add_attributes_for_words_shallow_parse(Instance_ptr instance,
                                            Sentence_ptr sentence,
                                            int wordIndex) {
    Morphological_parse_ptr parse;
    Annotated_word_ptr word;
    word = array_list_get(sentence->words, wordIndex);
    parse = word->parse;
    if (parse == NULL){
        return;
    }
    add_attribute_to_instance(instance, create_adjective_attribute(parse));
    add_attribute_to_instance(instance, create_auxiliary_verb_attribute(parse));
    add_attribute_to_instance(instance, create_capital_attribute(word->name));
    add_attribute_to_instance(instance, create_date_attribute(parse));
    add_attribute_to_instance(instance, create_fraction_attribute(parse));

    add_attribute_to_instance(instance, create_honorific_attribute(word->name));
    add_attribute_to_instance(instance, create_money_attribute(word->name));
    add_attribute_to_instance(instance, create_number_attribute(parse));
    add_attribute_to_instance(instance, create_organization_attribute(word->name));

    add_attribute_to_instance(instance, create_proper_noun_attribute(parse));
    add_attribute_to_instance(instance, create_real_attribute(parse));
    add_attribute_to_instance(instance, create_time_attribute(word->name));

    add_attribute_to_instance(instance, create_possessive_attribute(parse));
    add_attribute_to_instance(instance, create_last_ig_contains_tag_attribute(parse, ABLATIVE));
    add_attribute_to_instance(instance, create_last_ig_contains_tag_attribute(parse, ACCUSATIVE));
    add_attribute_to_instance(instance, create_last_ig_contains_tag_attribute(parse, GENITIVE));
    add_attribute_to_instance(instance, create_last_ig_contains_tag_attribute(parse, INSTRUMENTAL));

    add_attribute_to_instance(instance, create_main_pos_attribute(parse));
    add_attribute_to_instance(instance, create_predicate_attribute(sentence, wordIndex));
    add_attribute_to_instance(instance, create_root_pos_attribute(parse));
    add_attribute_to_instance(instance, create_root_form_attribute(parse));
    add_attribute_to_instance(instance, create_case_attribute(parse));
}

void add_attributes_for_empty_words_shallow_parse(Instance_ptr instance, const char *empty_word) {
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));

    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));

    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));

    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));
    add_attribute_to_instance(instance, create_binary_attribute(false));

    add_attribute_to_instance(instance, create_discrete_attribute("NULL"));
    add_attribute_to_instance(instance, create_discrete_attribute("NULL"));
    add_attribute_to_instance(instance, create_discrete_attribute("NULL"));
    add_attribute_to_instance(instance, create_discrete_attribute("NULL"));
    add_attribute_to_instance(instance, create_discrete_attribute("NULL"));
}
