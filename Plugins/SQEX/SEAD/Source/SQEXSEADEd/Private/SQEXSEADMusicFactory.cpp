// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEXSEADMusicFactory.h"
#include "AssetTypeCategories.h"
#include "SQEXSEADSoundBank.h"

USQEXSEADMusicFactory::USQEXSEADMusicFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = USQEXSEADSoundBank::StaticClass();
}
uint32 USQEXSEADMusicFactory::GetMenuCategories() const { return EAssetTypeCategories::Sounds; }
UObject * USQEXSEADMusicFactory::FactoryCreateNew(UClass * InClass, UObject * InParent, FName InName, EObjectFlags flags, UObject * Cntext, FFeedbackContext * Warn)
{
	return NewObject<USQEXSEADSoundBank>(InParent, InClass, InName, flags);
}