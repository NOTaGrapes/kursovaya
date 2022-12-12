object testWnd: TtestWnd
  Left = 0
  Top = 0
  Caption = 'TEST_WND // for test of paintings'
  ClientHeight = 600
  ClientWidth = 687
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object testPaintBox: TPaintBox
    Left = 0
    Top = 0
    Width = 600
    Height = 600
    OnPaint = testPaintBoxPaint
  end
  object testButton: TButton
    Left = 604
    Top = 8
    Width = 75
    Height = 584
    Caption = 'TEST!'
    TabOrder = 0
    OnClick = testButtonClick
  end
end
