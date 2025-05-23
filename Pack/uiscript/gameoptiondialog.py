#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################
## ÖNEMLİ NOT: Buradaki kodlara göre örnektir kendi packınıza göre düzenleyebilirsiniz yerlerini.
## Butonlar nereye gelecek ya da pencere boyutu nasıl olacak tamamen size bağlı ben kendi filesime göre düzenleyip ekledim aşağı bilginize.

## Arat

				## 판매문구
				{
					"name" : "salestext_on_off",
					"type" : "text",

					"x" : LINE_LABEL_X,
					"y" : 290+2,

					"text" : uiScriptLocale.OPTION_SALESTEXT,
				},
				{
					"name" : "salestext_on_button",
					"type" : "radio_button",

					"x" : LINE_DATA_X,
					"y" : 290,

					"text" : uiScriptLocale.OPTION_SALESTEXT_VIEW_ON,

					"default_image" : ROOT_PATH + "middle_button_01.sub",
					"over_image" : ROOT_PATH + "middle_button_02.sub",
					"down_image" : ROOT_PATH + "middle_button_03.sub",
				},
				{
					"name" : "salestext_off_button",
					"type" : "radio_button",

					"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH,
					"y" : 290,

					"text" : uiScriptLocale.OPTION_SALESTEXT_VIEW_OFF,

					"default_image" : ROOT_PATH + "middle_button_01.sub",
					"over_image" : ROOT_PATH + "middle_button_02.sub",
					"down_image" : ROOT_PATH + "middle_button_03.sub",
				},

## Altına yapıştır

				{
					"name" : "hide_system",
					"type" : "text",

					"x" : LINE_LABEL_X,
					"y" : 285+2,

					"text" : "Gizle",
				},
				{
					"name" : "ShowLyrionPetButton",
					"type" : "toggle_button",

					"x" : LINE_DATA_X,
					"y" : 290,

					"text" : "Pet",

					"default_image" : ROOT_PATH + "middle_button_01.sub",
					"over_image" : ROOT_PATH + "middle_button_02.sub",
					"down_image" : ROOT_PATH + "middle_button_03.sub",
				},
				{
					"name" : "ShowLyrionMountButton",
					"type" : "toggle_button",
	
					"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH,
					"y" : 290,

					"text" : "Binek",

					"default_image" : ROOT_PATH + "middle_button_01.sub",
					"over_image" : ROOT_PATH + "middle_button_02.sub",
					"down_image" : ROOT_PATH + "middle_button_03.sub",
				},
				{
					"name" : "ShowLyrionShopButton",
					"type" : "toggle_button",

					"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH+MIDDLE_BUTTON_WIDTH,
					"y" : 290,

					"text" : "Pazar",

					"default_image" : ROOT_PATH + "middle_button_01.sub",
					"over_image" : ROOT_PATH + "middle_button_02.sub",
					"down_image" : ROOT_PATH + "middle_button_03.sub",
				},

#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################
