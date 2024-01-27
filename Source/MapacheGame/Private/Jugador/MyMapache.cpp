// Fill out your copyright notice in the Description page of Project Settings.


#include "Jugador/MyMapache.h"
#include "Components/InputComponent.h"

// Sets default values
AMyMapache::AMyMapache()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyMapache::BeginPlay()
{
	Super::BeginPlay();
	
	movSpeed = 500;
	
}

// Called every frame
void AMyMapache::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyMapache::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis("MovVertical", this, &AMyMapache::VerticalAxis);
	PlayerInputComponent->BindAxis("MovHorizontal", this, &AMyMapache::HorizontalAxis);
	
	//PlayerInputComponent->BindAction("Agarrar", IE_Pressed, this, &AMyMapache::AccionAgarra);
}

void AMyMapache::VerticalAxis(float valor)
{
	float deltaSeconds = GetWorld()->GetDeltaSeconds();
	FVector movement = GetActorForwardVector() * movSpeed * deltaSeconds * valor;
	AddMovementInput(movement);
}

void AMyMapache::HorizontalAxis(float valor)
{
	float deltaSeconds = GetWorld()->GetDeltaSeconds();
	FVector movement = GetActorRightVector() * movSpeed * deltaSeconds * valor;
	AddMovementInput(movement);
}

/*void AMyMapache::AccionAgarra(AMyObjetoAgarrable* obj)
{
	if(!tieneObjeto)
	{
		//Agarra Objeto
		
	}
	else
	{
		//Tira Objeto
		
	}
}*/
