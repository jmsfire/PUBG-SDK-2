#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.5.5.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C
// 0x0030 (0x031C - 0x02EC)
class UControlOptionWidget_Gameapd_C : public UBaseOptionWidget_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	class UGamePadSettingsWidget_C*                    GamePadSettingsWidget;                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGeneralSettingWidget_Gamepad_C*             GeneralSettingWidget_Gamepad;                             // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UWidget*>                             FocusableList;                                            // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FocusIndex;                                               // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C");
		return ptr;
	}


	void GetGamePadHelpWidgetClass(class UClass** GuideClass);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void GetCurrentFocusWidget(class UWidget** FocusWidget);
	bool IsChanged();
	void OnPrevOrNextFocusableWidget(bool* bNext, class UWidget** FocusableWidget);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void Construct();
	void OnDefault();
	void OnReset();
	void OnApply();
	void ExecuteUbergraph_ControlOptionWidget_Gameapd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
