// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SocketConnectionTestSubsystem.generated.h"

class IWebSocket;
/**
 * 
 */
UCLASS()
class DARKFRONT_CLIENT_API USocketConnectionTestSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

private:
    TSharedPtr<IWebSocket> WebSocket;
};
