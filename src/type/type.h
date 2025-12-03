#include <cstdint>
#include <string>

class Type
{
public:
    Type(Type *elementType, uint64_t elementCount)
        : Type(ArrayTypeID), elementType(elementType),
          elementCount(elementCount) {}

    virtual std::string toString() const = 0;

    Type *getElementType() const { return elementType; }
    uint64_t getElementCount() const { return elementCount; }

private:
    Type *elementType;
    uint64_t elementCount;
};