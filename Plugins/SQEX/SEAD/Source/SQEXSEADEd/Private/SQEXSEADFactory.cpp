// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEXSEADFactory.h"
#include "AudioDeviceManager.h"
#include "Sound/SoundNodeWavePlayer.h"

#include "PackageTools.h"
#include "Misc/MessageDialog.h"
#include "AssetToolsModule.h"



USQEXSEADFactory::USQEXSEADFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Formats.Add(TEXT("mabf;MAB Data"));
	Formats.Add(TEXT("sabf;SAB Data"));
	bCreateNew = false;
	bEditAfterNew = true;
	bEditorImport = true;
	SupportedClass = USQEXSEADSoundBank::StaticClass();
	
}

bool USQEXSEADFactory::ShouldShowInNewMenu() const
{
	return true;
}

/*static bool bSoundFactorySuppressImportOverwriteDialog = false;*/
UObject* USQEXSEADFactory::FactoryCreateBinary(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn)
{
	GEditor->GetEditorSubsystem<UImportSubsystem>()->BroadcastAssetPreImport(this, Class, InParent, Name, Type);

	const int32 BufferSize = BufferEnd - Buffer;
	TArray<uint8> RawSoundData;
	RawSoundData.Append(Buffer, BufferSize);
	USQEXSEADSoundBank* NewSoundBank = NewObject<USQEXSEADSoundBank>(InParent, Name, Flags);
	NewSoundBank->RawData = RawSoundData;

	GEditor->GetEditorSubsystem<UImportSubsystem>()->BroadcastAssetPostImport(this, NewSoundBank);
	
	return NewSoundBank;

	
}
	
