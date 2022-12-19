#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_CheckOtherEnemyBlackboardValueConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_CheckOtherEnemyBlackboardValueConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    Equal,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

