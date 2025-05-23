#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################

## Arat

			self.showsalesTextButtonList.append(GetObject("salestext_on_button"))
			self.showsalesTextButtonList.append(GetObject("salestext_off_button"))

## Altına ekle

			self.LyrionModelShow.append(GetObject("ShowLyrionPetButton"))
			self.LyrionModelShow.append(GetObject("ShowLyrionMountButton"))	
			self.LyrionModelShow.append(GetObject("ShowLyrionShopButton"))	

#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################

## Arat

		self.showsalesTextButtonList[0].SAFE_SetEvent(self.__OnClickSalesTextOnButton)
		self.showsalesTextButtonList[1].SAFE_SetEvent(self.__OnClickSalesTextOffButton)

## Altına ekle

		self.LyrionModelShow[0].SetToggleUpEvent(self.__OnClickHidePetsButton)
		self.LyrionModelShow[0].SetToggleDownEvent(self.__OnClickHidePetsButton)

		self.LyrionModelShow[1].SetToggleUpEvent(self.__OnClickHideMountsButton)
		self.LyrionModelShow[1].SetToggleDownEvent(self.__OnClickHideMountsButton)	

		self.LyrionModelShow[2].SetToggleUpEvent(self.__OnClickHideShopsButton)
		self.LyrionModelShow[2].SetToggleDownEvent(self.__OnClickHideShopsButton)	

#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################


## Arat

	def __ClickRadioButton(self, buttonList, buttonIndex):
		try:
			selButton=buttonList[buttonIndex]
		except IndexError:
			return

		for eachButton in buttonList:
			eachButton.SetUp()

		selButton.Down()

## Altına ekle

	def UpdateLyrionModel(self):
		if systemSetting.IsHidePets():
			self.LyrionModelShow[0].Down()
		else:
			self.LyrionModelShow[0].SetUp()

		if systemSetting.IsHideMounts():
			self.LyrionModelShow[1].Down()
		else:
			self.LyrionModelShow[1].SetUp()	

		if systemSetting.IsHideShops():
			self.LyrionModelShow[2].Down()
		else:
			self.LyrionModelShow[2].SetUp()

	def __OnClickHidePetsButton(self):
		systemSetting.SetHidePets(not systemSetting.IsHidePets())
		self.UpdateLyrionModel()

	def __OnClickHideMountsButton(self):
		systemSetting.SetHideMounts(not systemSetting.IsHideMounts())
		self.UpdateLyrionModel()	

	def __OnClickHideShopsButton(self):
		import uiPrivateShopBuilder
		systemSetting.SetHideShops(not systemSetting.IsHideShops())
		if systemSetting.IsHideShops():		
			systemSetting.SetShowSalesTextFlag(False)
			uiPrivateShopBuilder.UpdateADBoard()
		else:
			systemSetting.SetShowSalesTextFlag(True)
			uiPrivateShopBuilder.UpdateADBoard()
			
		self.UpdateLyrionModel()

#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################

## Arat

	def __Initialize(self):
		self.titleBar = 0
		self.nameColorModeButtonList = []
		self.viewTargetBoardButtonList = []
		self.pvpModeButtonDict = {}
		self.blockButtonList = []
		self.viewChatButtonList = []
		self.alwaysShowNameButtonList = []
		self.showDamageButtonList = []
		self.showsalesTextButtonList = []
 
## Altına ekle

		self.LyrionModelShow = []

#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################
