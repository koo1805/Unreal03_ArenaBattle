// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameMode.h"
//#include <Player/ABPlayerController.h>

AABGameMode::AABGameMode()
{
	// 게임에서 사용할 클래스 타입 선언

	/* 블루프린트로부터 클래스 정보 로드		======================================================
	static ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(TEXT("블루프린트 경로_C"));

	// 로드 성공한 경우 클래스 지정
	if (ThirdPersonClassRef.Succeeded())
	{
		DefaultPawnClass = ThirdPersonClassRef.Class;
	}	//==================================================================================*/

	// 플레이어 컨트롤러 클래스 설정
	//PlayerControllerClass = AABPlayerController::StaticClass();
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/Unreal03_ArenaBattle.ABPlayerController"));

	if (PlayerControllerClassRef.Succeeded())
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}

}
