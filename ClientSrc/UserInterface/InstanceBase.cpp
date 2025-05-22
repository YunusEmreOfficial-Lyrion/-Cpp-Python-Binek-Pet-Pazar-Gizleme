//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################

// Arat

void CInstanceBase::OnSelected()
{

	if (IsStoneDoor())
		return;

	if (IsDead())
		return;

	__AttachSelectEffect();
}

// Altına ekle

#ifdef ENABLE_HIDE_PET
BOOL CInstanceBase::IsPet()
{
	if (GetRace() >= 34001 && GetRace() <= 34999)
		return true;
	return false;
}
#endif
#ifdef ENABLE_HIDE_MOUNT
BOOL CInstanceBase::IsMount()
{
	if (GetRace() >= 20110 && GetRace() <= 20299)
		return true;
	return false;
}
#endif
#ifdef ENABLE_HIDE_SHOPS
BOOL CInstanceBase::IsShops()
{
	if (GetRace() >= 30000 && GetRace() <= 30007)
		return true;
	return false;
}
#endif

//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################


//Bu fonksiyon içerisinde

void CInstanceBase::Update()
{

// Bunu bul

	m_GraphicThingInstance.UpdateAdvancingPointInstance();

// Altına ekle

#ifdef ENABLE_HIDE_PET
	if (IsPet())
	{
		if (CPythonSystem::Instance().IsHidePets())
		{
			if (!IsAffect(AFFECT_INVISIBILITY))
			{
				__SetAffect(AFFECT_INVISIBILITY, true);
				m_kAffectFlagContainer.Set(AFFECT_INVISIBILITY, true);
			}
		}
		else
		{
			if (IsAffect(AFFECT_INVISIBILITY))
			{
				__SetAffect(AFFECT_INVISIBILITY, false);
				m_kAffectFlagContainer.Set(AFFECT_INVISIBILITY, false);
			}
		}
	}
#endif
#ifdef ENABLE_HIDE_MOUNT
	if (IsMount())
	{
		if (CPythonSystem::Instance().IsHideMounts())
		{
			if (!IsAffect(AFFECT_INVISIBILITY))
			{
				__SetAffect(AFFECT_INVISIBILITY, true);
				m_kAffectFlagContainer.Set(AFFECT_INVISIBILITY, true);
			}
		}
		else
		{
			if (IsAffect(AFFECT_INVISIBILITY))
			{
				__SetAffect(AFFECT_INVISIBILITY, false);
				m_kAffectFlagContainer.Set(AFFECT_INVISIBILITY, false);
			}
		}
	}
#endif

#ifdef ENABLE_HIDE_SHOPS
	if (IsShops())
	{
		if (CPythonSystem::Instance().IsHideShops())
		{
			if (!IsAffect(AFFECT_INVISIBILITY))
			{
				__SetAffect(AFFECT_INVISIBILITY, true);
				m_kAffectFlagContainer.Set(AFFECT_INVISIBILITY, true);
			}
		}
		else
		{
			if (IsAffect(AFFECT_INVISIBILITY))
			{
				__SetAffect(AFFECT_INVISIBILITY, false);
				m_kAffectFlagContainer.Set(AFFECT_INVISIBILITY, false);
			}
		}
	}
#endif

//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################
