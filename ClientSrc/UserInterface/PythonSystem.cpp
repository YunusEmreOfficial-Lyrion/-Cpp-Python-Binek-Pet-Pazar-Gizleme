//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################

// Arat

	m_Config.bShowDamage		= true;
	m_Config.bShowSalesText		= true;
	m_Config.bSnowTexturesMode = true;

// Altına ekle

#ifdef ENABLE_HIDE_PET
	m_Config.bHidePets = false;
#endif
#ifdef ENABLE_HIDE_MOUNT
	m_Config.bHideMounts = false;
#endif
#ifdef ENABLE_HIDE_SHOPS
	m_Config.bHideShops = false;
#endif

//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################


// Arat
		else if (!stricmp(command, "SHOW_DAMAGE"))
			m_Config.bShowDamage = atoi(value) == 1 ? true : false;
		
		else if (!stricmp(command, "SHOW_SALESTEXT"))
			m_Config.bShowSalesText = atoi(value) == 1 ? true : false;

// Altına ekle

#ifdef ENABLE_HIDE_PET
		else if (!stricmp(command, "HIDE_PETS"))
			m_Config.bHidePets = atoi(value) == 1 ? true : false;
#endif
#ifdef ENABLE_HIDE_MOUNT
		else if (!stricmp(command, "HIDE_MOUNTS"))
			m_Config.bHideMounts = atoi(value) == 1 ? true : false;
#endif
#ifdef ENABLE_HIDE_SHOPS
		else if (!stricmp(command, "HIDE_SHOPS"))
			m_Config.bHideShops = atoi(value) == 1 ? true : false;
#endif

//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################

// Arat
	if (m_Config.bShowDamage == 0)
		fprintf(fp, "SHOW_DAMAGE		%d\n", m_Config.bShowDamage);
	
	if (m_Config.bShowSalesText == 0)
		fprintf(fp, "SHOW_SALESTEXT		%d\n", m_Config.bShowSalesText);
	
// Altına ekle

#ifdef ENABLE_HIDE_PET
	fprintf(fp, "HIDE_PETS				%d\n", m_Config.bHidePets);
#endif
#ifdef ENABLE_HIDE_MOUNT
	fprintf(fp, "HIDE_MOUNTS			%d\n", m_Config.bHideMounts);
#endif
#ifdef ENABLE_HIDE_SHOPS
	fprintf(fp, "HIDE_SHOPS				%d\n", m_Config.bHideShops);
#endif

//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################
