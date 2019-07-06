// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Range.h"
#include "Timespan.h"
#include "RangeStatics.generated.h"

/**
 * 
 */
UCLASS()
class RANGEEXTENSION_API URangeStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

#pragma region Float
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Get Lower Bound Value (Float)"))
	static float GetLowerBoundValue_Float(FFloatRange const& Range) { return Range.GetLowerBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Get Upper Bound Value (Float)"))
	static float GetUpperBoundValue_Float(FFloatRange const& Range) { return Range.GetUpperBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Contains (Float)"))
	static bool Contains_Float(FFloatRange const& Range, FFloatRange OtherRange) { return Range.Contains(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Contigous (Float)"))
	static bool Contiguous_Float(FFloatRange const& Range, FFloatRange OtherRange) { return Range.Contiguous(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Has Lower Bound (Float)"))
	static bool HasLowerBound_Float(FFloatRange const& Range) { return Range.HasLowerBound(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Has Upper Bound (Float)"))
	static bool HasUpperBound_Float(FFloatRange const& Range) { return Range.HasUpperBound(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Is Degenerate (Float)"))
	static bool IsDegenerate_Float(FFloatRange const& Range) { return Range.IsDegenerate();	}
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Is Empty (Float)"))
	static bool IsEmpty_Float(FFloatRange const& Range) { return Range.IsEmpty(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Size (Float)"))
	static float Size_Float(FFloatRange const& Range) { return Range.Size<float>(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Split (Float)"))
	static TArray<FFloatRange> Split_Float(FFloatRange const& Range, float InElement) { return Range.Split(InElement); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Difference( Float)"))
	static TArray<FFloatRange> Difference_Float(FFloatRange const& Range, FFloatRange OtherRange) { return FFloatRange::Difference(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Hull (Float)"))
	static FFloatRange Hull_Float(FFloatRange const& Range, FFloatRange OtherRange) { return FFloatRange::Hull(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Intersection (Float)"))
	static FFloatRange Intersection_Float(TArray<FFloatRange> const& Ranges) { return FFloatRange::Intersection(Ranges); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Float", meta=(DisplayName = "Union (Float)"))
	static TArray<FFloatRange> Union_Float(FFloatRange const& Range, FFloatRange OtherRange) { return FFloatRange::Union(Range, OtherRange); }
#pragma endregion 

#pragma region int32
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Get Lower Bound Value (Int)"))
	static int32 GetLowerBoundValue_Int(FInt32Range const& Range) { return Range.GetLowerBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Get Upper Bound Value (Int)"))
	static int32 GetUpperBoundValue_Int(FInt32Range const& Range) { return Range.GetUpperBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Contains (Int)"))
	static bool Contains_Int(FInt32Range const& Range, FInt32Range OtherRange) { return Range.Contains(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Contigous (Int)"))
	static bool Contiguous_Int(FInt32Range const& Range, FInt32Range OtherRange) { return Range.Contiguous(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Has Lower Bound (Int)"))
	static bool HasLowerBound_Int(FInt32Range const& Range) { return Range.HasLowerBound(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Has Upper Bound (Int)"))
	static bool HasUpperBound_Int(FInt32Range const& Range) { return Range.HasUpperBound(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Is Degenerate (Int)"))
	static bool IsDegenerate_Int(FInt32Range const& Range) { return Range.IsDegenerate(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Is Empty (Int)"))
	static bool IsEmpty_Int(FInt32Range const& Range) { return Range.IsEmpty(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Size (Int)"))
	static int32 Size_Int(FInt32Range const& Range) { return Range.Size<int32>(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Split (Int)"))
	static TArray<FInt32Range> Split_Int(FInt32Range const& Range, int32 InElement) { return Range.Split(InElement); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Difference (Int)"))
	static TArray<FInt32Range> Difference_Int(FInt32Range const& Range, FInt32Range OtherRange) { return FInt32Range::Difference(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Hull (Int)"))
	static FInt32Range Hull_Int(FInt32Range const& Range, FInt32Range OtherRange) { return FInt32Range::Hull(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Intersection (Int)"))
	static FInt32Range Intersection_Int(TArray<FInt32Range> const& Ranges) { return FInt32Range::Intersection(Ranges); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Int", meta = (DisplayName = "Union (Int)"))
	static TArray<FInt32Range> Union_Int(FInt32Range const& Range, FInt32Range OtherRange) { return FInt32Range::Union(Range, OtherRange); }
#pragma endregion 

#pragma region FDateTime
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Get Lower Bound Value (Date)"))
	static FDateTime GetLowerBoundValue_Date(FDateRange const& Range) { return Range.GetLowerBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Get Upper Bound Value (Date)"))
	static FDateTime GetUpperBoundValue_Date(FDateRange const& Range) { return Range.GetUpperBoundValue(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Contains (Date)"))
	static bool Contains_Date(FDateRange const& Range, FDateRange OtherRange) { return Range.Contains(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Contigous (Date)"))
	static bool Contiguous_Date(FDateRange const& Range, FDateRange OtherRange) { return Range.Contiguous(OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Has Lower Bound (Date)"))
	static bool HasLowerBound_Date(FDateRange const& Range) { return Range.HasLowerBound(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Has Upper Bound (Date)"))
	static bool HasUpperBound_Date(FDateRange const& Range) { return Range.HasUpperBound(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Is Degenerate (Date)"))
	static bool IsDegenerate_Date(FDateRange const& Range) { return Range.IsDegenerate(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Is Empty (Date)"))
	static bool IsEmpty_Date(FDateRange const& Range) { return Range.IsEmpty(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Size (Date)"))
	static FTimespan Size_Date(FDateRange const& Range) { return Range.Size<FTimespan>(); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Split (Date)"))
	static TArray<FDateRange> Split_Date(FDateRange const& Range, FDateTime InElement) { return Range.Split(InElement); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Difference (Date)"))
	static TArray<FDateRange> Difference_Date(FDateRange const& Range, FDateRange OtherRange) { return FDateRange::Difference(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Hull (Date)"))
	static FDateRange Hull_Date(FDateRange const& Range, FDateRange OtherRange) { return FDateRange::Hull(Range, OtherRange); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Intersection (Date)"))
	static FDateRange Intersection_Date(TArray<FDateRange> const& Ranges) { return FDateRange::Intersection(Ranges); }
	UFUNCTION(BlueprintPure, Category = "Utils|Range|Date", meta = (DisplayName = "Union (Date)"))
	static TArray<FDateRange> Union_Date(FDateRange const& Range, FDateRange OtherRange) { return FDateRange::Union(Range, OtherRange); }
#pragma endregion 
};
