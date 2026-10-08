// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/ABItemData.h"
#include "ABWeaponItemData.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL03_ARENABATTLE_API UABWeaponItemData : public UABItemData
{
	GENERATED_BODY()
	
public:
	// 제공할 무기에 대한 스켈레탈 메시 애셋 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	//TObjectPtr<USkeletalMesh> WeaponMesh;
	TSoftObjectPtr<class USkeletalMesh> WeaponMesh;
};
