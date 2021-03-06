#if !defined(AFX_RJOYCFG_H__D53F1A21_C590_11D1_896D_00004760745C__INCLUDED_)
#define AFX_RJOYCFG_H__D53F1A21_C590_11D1_896D_00004760745C__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPicture;

/////////////////////////////////////////////////////////////////////////////
// CRJoyCfg wrapper class

class CRJoyCfg : public CWnd
{
protected:
	DECLARE_DYNCREATE(CRJoyCfg)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x1b499f6b, 0xc31e, 0x11d1, { 0xa1, 0xf0, 0x44, 0x45, 0x53, 0x54, 0x0, 0x0 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	CPicture GetControlPicture();
	void SetControlPicture(LPDISPATCH);
	long GetX();
	void SetX(long);
	long GetY();
	void SetY(long);

// Operations
public:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RJOYCFG_H__D53F1A21_C590_11D1_896D_00004760745C__INCLUDED_)
