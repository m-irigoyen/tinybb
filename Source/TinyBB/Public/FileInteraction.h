// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileInteraction.generated.h"

/**
 *
 */
UCLASS()
class TINYBB_API UFileInteraction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "IO")
		static bool FileSaveString(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintPure, Category = "IO")
		static bool FileLoadString(FString FileNameA, FString& SaveTextA);
};
