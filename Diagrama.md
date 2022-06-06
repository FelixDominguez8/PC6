```mermaid
classDiagram
      SistemaOperativo <|-- Linux
      SistemaOperativo <|-- Mac
      SistemaOperativo <|-- Windows
      SistemaOperativo : -string Nombre
      SistemaOperativo : -ETipo Tipo
      SistemaOperativo: SistemaOperativo( _nombre : string, _tipo : ETipo)
      SistemaOperativo: +nombre() string
      SistemaOperativo: +tipo() ETipo
      SistemaOperativo: +aplicaciones() int
      SistemaOperativo: +imprimir()
      class Linux{
          -int apt_packages
          +string distro
          Linux( _nombre : string, _tipo : ETipo, _apt_packages : int)
          +aplicaciones() int
          +imprimir()
      }
      class Mac{
          -int applestore_apps
          Mac( _nombre : string, _tipo : ETipo, _applestore_apps : int)          
          +aplicaciones() int
          +imprimir()
      }
      class Windows{
          -int microsoft_apps
          Windows( _nombre : string, _tipo : ETipo, _microsoft_apps : int)    
          +aplicaciones() int
          +imprimir()
      }
      class ETipo{
          <<enumeration>>
          eLinux
          eMac
          eWindows
      }      

```