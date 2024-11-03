#pragma once

#include <memory>
#include <malloc.h>

#define mkuptr(type, ...) std::make_unique<type>(__VA_ARGS__)
#define mksptr(type, ...) std::make_shared<type>(__VA_ARGS__)
#define mksptrarr(type, size) std::shared_ptr<type[]>(new type[size], [](type* __ptr) { delete[] __ptr; })
#define mkwptr(type, ptr) std::weak_ptr<type>(ptr)

#define mkcstyleptr(type, size) (type*)malloc(size)
#define delcstyleptr(ptr) free(ptr)

#define mkptr(type) new type
#define mkarr(type, size) new type[size]
#define delptr(ptr) delete ptr
#define delarr{ptr} delete[] ptr