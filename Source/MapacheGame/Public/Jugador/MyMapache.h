// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyMapache.generated.h"

UCLASS()
class MAPACHEGAME_API AMyMapache : public ACharacter
{
	GENERATED_BODY()
	
public:
//Variables
UPROPERTY(EditAnywhere, BlueprintReadWrite) int movSpeed;
UPROPERTY(BlueprintReadWrite) bool tieneObjeto;
UPROPERTY(BlueprintReadWrite) bool miraDerecha;
UPROPERTY(BlueprintReadWrite) bool caminaDerecha;
UPROPERTY(BlueprintReadWrite) bool caminaIzquierda;

//Funciones
void VerticalAxis(float valor);
void HorizontalAxis(float valor);
//UFUNCTION(BlueprintCallable) void AccionAgarra(AMyObjetoAgarrable* obj);

public:
	// Sets default values for this character's properties
	AMyMapache();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
