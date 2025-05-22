//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################

// Arat

PyObject * systemSetShadowLevel(PyObject * poSelf, PyObject * poArgs)
{
	int level;

	if (!PyTuple_GetInteger(poArgs, 0, &level))
		return Py_BuildException();

	if (level > 0)
		CPythonSystem::Instance().SetShadowLevel(level);

	return Py_BuildNone();
}

// Altına ekle

#ifdef ENABLE_HIDE_PET
PyObject * systemSetHidePets(PyObject * poSelf, PyObject * poArgs)
{
	int iFlag;
	if (!PyTuple_GetInteger(poArgs, 0, &iFlag))
		return Py_BuildException();

	CPythonSystem::Instance().SetHidePets(iFlag);

	return Py_BuildNone();
}
PyObject * systemIsHidePets(PyObject * poSelf, PyObject * poArgs)
{
	return Py_BuildValue("i", CPythonSystem::Instance().IsHidePets());
}
#endif
#ifdef ENABLE_HIDE_MOUNT
PyObject * systemSetHideMounts(PyObject * poSelf, PyObject * poArgs)
{
	int iFlag;
	if (!PyTuple_GetInteger(poArgs, 0, &iFlag))
		return Py_BuildException();

	CPythonSystem::Instance().SetHideMounts(iFlag);

	return Py_BuildNone();
}
PyObject * systemIsHideMounts(PyObject * poSelf, PyObject * poArgs)
{
	return Py_BuildValue("i", CPythonSystem::Instance().IsHideMounts());
}
#endif
#ifdef ENABLE_HIDE_SHOPS
PyObject * systemSetHideShops(PyObject * poSelf, PyObject * poArgs)
{
	int iFlag;
	if (!PyTuple_GetInteger(poArgs, 0, &iFlag))
		return Py_BuildException();

	CPythonSystem::Instance().SetHideShops(iFlag);

	return Py_BuildNone();
}
PyObject * systemIsHideShops(PyObject * poSelf, PyObject * poArgs)
{
	return Py_BuildValue("i", CPythonSystem::Instance().IsHideShops());
}
#endif

//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################

// Arat

		{ NULL,							NULL,							NULL }

// Üstüne ekle

#ifdef ENABLE_HIDE_PET
		{ "SetHidePets",				systemSetHidePets,				METH_VARARGS },
		{ "IsHidePets",					systemIsHidePets,				METH_VARARGS },
#endif
#ifdef ENABLE_HIDE_MOUNT		
		{ "SetHideMounts",				systemSetHideMounts,			METH_VARARGS },		
		{ "IsHideMounts",				systemIsHideMounts,				METH_VARARGS },
#endif
#ifdef ENABLE_HIDE_SHOPS
		{ "SetHideShops",				systemSetHideShops,				METH_VARARGS },
		{ "IsHideShops",				systemIsHideShops,				METH_VARARGS },
#endif

//#####################/*/-*/-*/*-/-*/-*/-//-/ 「Lyrion 」 YunusED || Metin2House /*/-*/-*/*-/-*/-*/-//-/#####################
