/* THIS FILE IS AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * schema-defined QAPI visitor functions
 *
 * Copyright IBM, Corp. 2011
 *
 * Authors:
 *  Anthony Liguori   <aliguori@us.ibm.com>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 *
 */

#include "qemu-common.h"
#include "qapi-visit.h"

void visit_type_int32List(Visitor *m, int32List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        int32List *native_i = (int32List *)i;
        visit_type_int32(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_int16List(Visitor *m, int16List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        int16List *native_i = (int16List *)i;
        visit_type_int16(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_intList(Visitor *m, intList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        intList *native_i = (intList *)i;
        visit_type_int(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_uint8List(Visitor *m, uint8List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        uint8List *native_i = (uint8List *)i;
        visit_type_uint8(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_numberList(Visitor *m, numberList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        numberList *native_i = (numberList *)i;
        visit_type_number(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_int8List(Visitor *m, int8List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        int8List *native_i = (int8List *)i;
        visit_type_int8(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_sizeList(Visitor *m, sizeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        sizeList *native_i = (sizeList *)i;
        visit_type_size(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_uint64List(Visitor *m, uint64List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        uint64List *native_i = (uint64List *)i;
        visit_type_uint64(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_uint16List(Visitor *m, uint16List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        uint16List *native_i = (uint16List *)i;
        visit_type_uint16(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_boolList(Visitor *m, boolList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        boolList *native_i = (boolList *)i;
        visit_type_bool(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_strList(Visitor *m, strList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        strList *native_i = (strList *)i;
        visit_type_str(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_int64List(Visitor *m, int64List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        int64List *native_i = (int64List *)i;
        visit_type_int64(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_uint32List(Visitor *m, uint32List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        uint32List *native_i = (uint32List *)i;
        visit_type_uint32(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_ErrorClassList(Visitor *m, ErrorClassList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        ErrorClassList *native_i = (ErrorClassList *)i;
        visit_type_ErrorClass(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_ErrorClass(Visitor *m, ErrorClass *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, ErrorClass_lookup, "ErrorClass", name, errp);
}

void visit_type_X86CPURegister32List(Visitor *m, X86CPURegister32List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        X86CPURegister32List *native_i = (X86CPURegister32List *)i;
        visit_type_X86CPURegister32(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}

void visit_type_X86CPURegister32(Visitor *m, X86CPURegister32 *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, X86CPURegister32_lookup, "X86CPURegister32", name, errp);
}

static void visit_type_X86CPUFeatureWordInfo_fields(Visitor *m, X86CPUFeatureWordInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->cpuid_input_eax, "cpuid-input-eax", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cpuid_input_ecx, "cpuid-input-ecx", &err);
    if (!err && (*obj)->has_cpuid_input_ecx) {
        visit_type_int(m, &(*obj)->cpuid_input_ecx, "cpuid-input-ecx", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_X86CPURegister32(m, &(*obj)->cpuid_register, "cpuid-register", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->features, "features", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_X86CPUFeatureWordInfo(Visitor *m, X86CPUFeatureWordInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "X86CPUFeatureWordInfo", name, sizeof(X86CPUFeatureWordInfo), &err);

    if (!err) {
        if (*obj) {
            visit_type_X86CPUFeatureWordInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_X86CPUFeatureWordInfoList(Visitor *m, X86CPUFeatureWordInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev)) != NULL;
         prev = &i) {
        X86CPUFeatureWordInfoList *native_i = (X86CPUFeatureWordInfoList *)i;
        visit_type_X86CPUFeatureWordInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m);
out:
    error_propagate(errp, err);
}
