// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ABUserWidget.generated.h"

/**
 * 자신을 소유하는 액터 정보를 가지는 위젯 타입
 */
UCLASS()
class UNREAL03_ARENABATTLE_API UABUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// 생성자
	UABUserWidget(const FObjectInitializer& ObjectIInitializer);

	// Setter
	FORCEINLINE void SetOwningActor(AActor* NewOwner) { OwningActor = NewOwner; }

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Actor")
	TObjectPtr<AActor> OwningActor;
	
};
