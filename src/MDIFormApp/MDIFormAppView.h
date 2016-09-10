
// MDIFormAppView.h : interface of the CMDIFormAppView class
//

#pragma once


class CMDIFormAppView : public CFormView
{
protected: // create from serialization only
	CMDIFormAppView();
	DECLARE_DYNCREATE(CMDIFormAppView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MDIFORMAPP_FORM };
#endif

// Attributes
public:
	CMDIFormAppDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CMDIFormAppView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MDIFormAppView.cpp
inline CMDIFormAppDoc* CMDIFormAppView::GetDocument() const
   { return reinterpret_cast<CMDIFormAppDoc*>(m_pDocument); }
#endif

