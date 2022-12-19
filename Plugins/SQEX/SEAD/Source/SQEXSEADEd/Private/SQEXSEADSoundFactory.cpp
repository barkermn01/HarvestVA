// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEXSEADSoundFactory.h"
#include "AssetTypeCategories.h"
#include "SQEXSEADSoundBank.h"

USQEXSEADSoundFactory::USQEXSEADSoundFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = USQEXSEADSoundBank::StaticClass();
}
uint32 USQEXSEADSoundFactory::GetMenuCategories() const { return EAssetTypeCategories::Sounds; }
UObject * USQEXSEADSoundFactory::FactoryCreateNew(UClass * InClass, UObject * InParent, FName InName, EObjectFlags flags, UObject * Cntext, FFeedbackContext * Warn)
{
	return NewObject<USQEXSEADSoundBank>(InParent, InClass, InName, flags);
}