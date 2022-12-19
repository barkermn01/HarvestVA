#include "CharacterStatus.h"

FCharacterStatus::FCharacterStatus() {
    this->Stamina = 0;
    this->Hp = 0;
    this->AttackPhysics = 0;
    this->AttackMagic = 0;
    this->DefensePhysics = 0;
    this->DefenseMagic = 0;
    this->ResistZan = 0;
    this->ResistGeki = 0;
    this->ResistSai = 0;
    this->ResistHa = 0;
    this->ResistHi = 0;
    this->ResistFuu = 0;
    this->ResistSui = 0;
    this->ResistChi = 0;
    this->ResistHyou = 0;
    this->ResistRai = 0;
    this->ResistTetsu = 0;
    this->ResistDoku = 0;
    this->DamageZan = 0;
    this->DamageGeki = 0;
    this->DamageSai = 0;
    this->DamageHa = 0;
    this->DamageHi = 0;
    this->DamageFuu = 0;
    this->DamageSui = 0;
    this->DamageChi = 0;
    this->DamageHyou = 0;
    this->DamageRai = 0;
    this->DamageTetsu = 0;
    this->DamageDoku = 0;
    this->DamageBreak = 0;
    this->AddBreakMulti = 0;
    this->SkillCoolTime = 0;
    this->JobCoolTime = 0;
    this->CriticalRate = 0;
    this->AttackInterval = 0;
    this->StaminaRecoveryInterval = 0;
    this->Slow = 0;
    this->bBind = false;
    this->bLockItem = false;
    this->bLockFood = false;
    this->FoodEffect = 0;
    this->MultiDot = 0;
    this->AttackRateUpByTargetStatusEffectNum = 0;
    this->JobPoint = 0;
    this->EffectResistDotPoison = 0;
    this->EffectResistDotPhysics = 0;
    this->EffectResistDotMagic = 0;
    this->EffectResistStun = 0;
    this->EffectResistSlow = 0;
    this->EffectResistBind = 0;
    this->EffectResistCharm = 0;
    this->EffectResistFear = 0;
    this->EffectResistLockFood = 0;
    this->EffectResistFoodEffectDown = 0;
    this->BreakMulti1 = 0;
    this->BreakMulti2 = 0;
    this->BreakMulti3 = 0;
    this->BreakMulti4 = 0;
    this->BreakMulti12 = 0;
    this->BreakMulti23 = 0;
    this->BreakMulti34 = 0;
    this->DpsGauge = 0;
}
