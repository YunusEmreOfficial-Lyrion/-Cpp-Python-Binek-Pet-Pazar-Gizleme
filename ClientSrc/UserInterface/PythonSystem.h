//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################

// Arat

			bool			bAlwaysShowName;
			bool			bShowDamage;
			bool			bShowSalesText;

// Altına ekle

#ifdef ENABLE_HIDE_PET
			bool			bHidePets;
#endif
#ifdef ENABLE_HIDE_MOUNT
			bool			bHideMounts;
#endif
#ifdef ENABLE_HIDE_SHOPS
			bool			bHideShops;
#endif

//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################


// Arat

		void							SetShowDamageFlag(int iFlag);
		void							SetShowSalesTextFlag(int iFlag);

// Altına ekle

#ifdef ENABLE_HIDE_PET
		bool							IsHidePets()									{ return m_Config.bHidePets; }
		void							SetHidePets(bool iFlag)							{ m_Config.bHidePets = iFlag; }
#endif
#ifdef ENABLE_HIDE_MOUNT
		bool							IsHideMounts()										{ return m_Config.bHideMounts; }
		void							SetHideMounts(bool iFlag)							{ m_Config.bHideMounts = iFlag; }
#endif
#ifdef ENABLE_HIDE_SHOPS
		bool							IsHideShops()										{ return m_Config.bHideShops; }
		void							SetHideShops(bool iFlag)							{ m_Config.bHideShops = iFlag; }
#endif

//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################
