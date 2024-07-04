// Fill out your copyright notice in the Description page of Project Settings.


#include "DarkFront_Client/Public/Test/SocketConnectionTestSubsystem.h"

#include "IWebSocket.h"
#include "WebSocketsModule.h"

void USocketConnectionTestSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    /*FString BaseURL = TEXT("ws://localhost:32000/ws");
    TMap<FString, FString> Headers;

    FWebSocketsModule& WebSocketsModule = FModuleManager::LoadModuleChecked<FWebSocketsModule>("WebSockets");
    WebSocket = WebSocketsModule.CreateWebSocket(BaseURL, TEXT("wss"), Headers);
    
    WebSocket->OnConnected().AddLambda([this]()
    {
        UE_LOG(LogTemp, Log, TEXT("Connected to server"));
        float playerPositionX = 10.5f;
        float playerPositionY = 15.2f;
        float playerPositionZ = 5.3f;
        FString message = FString::Printf(TEXT("%f,%f,%f"), playerPositionX, playerPositionY, playerPositionZ);
        WebSocket->Send(message);

        //WebSocket->Close();
    });

    WebSocket->OnConnectionError().AddLambda([](const FString& Error)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to connect: %s"), *Error);
    });

    WebSocket->OnMessage().AddLambda([](const FString& Message)
    {
        UE_LOG(LogTemp, Log, TEXT("Message from server: %s"), *Message);
    });

    WebSocket->Connect();*/
}